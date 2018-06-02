#ifndef MAP_REDUCE_HPP
#define MAP_REDUCE_HPP

namespace atmoz {
namespace parallel {
namespace {

template <class Function, class... Args>
class MapReduce {
   public:
    class Master;
    class Worker;

    template <typename T>
    class Mapper {
       public:
       private:
    };

    template <typename T>
    class Reducer;
};

}  // namespace
}  // namespace parallel
}  // namespace atmoz
#endif  // MAP_REDUCE_HPP
