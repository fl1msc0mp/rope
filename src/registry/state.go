package state

type State struct {}

type StateWriter interface {
    State() struct
}

type StateReader interface {
    State() struct
}
