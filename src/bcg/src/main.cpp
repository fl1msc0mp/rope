#include <ncurses.h>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

bool curses_started = 0;
bool input_mode_command = 1;
int row, col;
std::string input;
std::unique_ptr game_checkpoint;

struct player {
    std::string id;
};

struct level {
    int num;
    int score_bonus;
    player *p;
};

struct history {};

auto parse_args(int argc, char **argv) -> void { unsigned int i; }

auto get_input() -> void {
    char ch;
    input.clear();
    if (input_mode_command) {
        while (1) {
            ch = getch();
            if (ch == '\n') {
                break;
            }
            if (ch == '\a' || ch == '\b') {
                if (!input.empty()) {
                    input.pop_back();
                    addch('\b');
                    addch(' ');
                    int y, x;
                    getyx(stdscr, y, x);
                    move(y, x - 1);
                }
            } else {
                input.push_back(ch);
                addch(ch);
            }
        }
    } else {
        ch = getch();
        input.push_back(ch);
    }
}

auto printstr(const std::string &str) -> void {
    for (char ch : str) {
        addch(ch);
    }
}

auto mvprintstr(int y, int x, const std::string &str) -> void {
    move(y, x);
    printstr(str);
}

auto mvwprintstr(WINDOW *win, int y, int x, const std::string &str) -> void {
    wmove(win, y, x);
    printstr(str);
}

auto wprintstr(WINDOW *win, const std::string &str) -> void {
    int y, x;
    getyx(win, y, x);
    mvwprintstr(win, y, x, str);
}

auto endCurses() -> void {
    if (curses_started && !isendwin()) {
        endwin();
    }
}

auto startCurses() -> void {
    if (curses_started) {
        refresh();
    } else {
        initscr();
        raw();
        noecho();
        keypad(stdscr, 1);
        atexit(endCurses);
        curses_started = 1;
    }
}

auto init_color_pairs() -> void {
    short f, b;
    for (f = 0; f < COLORS; ++f) {
        for (b = 0; b < COLORS; ++b) {
            init_pair(f * COLORS + b, f, b);
        }
    }
}

auto prompt_exit() -> int {
    printstr("Are you sure you want to exit?");
    get_input();
    if (input == "y") {
        return 0;
    }
    if (input == "Y") {
        return 0;
    }
    return 1;
}

auto game_loop() -> int { return 0; }

auto game_input() -> void {
    union UserMovement_t {
        bool can_move_left;
        bool can_move_right;
        bool can_move_up;
        bool can_move_down;
    };
}

auto print_usage() -> void { std::cout << "(c) 2018 " << std::endl; }
auto main() -> int {
    startCurses();
    if (!has_colors()) {
        endCurses();
        std::cout << "Your terminal does not support color" << std::endl;
        return 1;
    }
    start_color();
    init_color_pairs();
    getmaxyx(stdscr, row, col);
    while (1) {
        get_input();
        if (input == "q") {
            int i = prompt_exit();
            return i;
            // return 0;
        }
    }
    endCurses();
    return 1;
}
