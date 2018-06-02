#ifndef VM_H
#define VM_H
namespace atmoz {
namespace cirkit {
namespace {

class LocalInstance;
class RemoteInstance;

template <class Instance>
class VM {
   public:
    explicit VM();
    static constexpr VM<Instance>* instance = nullptr;
    static constexpr VM<Instance>* StartVM();

   private:
    virtual ~VM();
};

}  // namespace
}  // namespace cirkit
}  // namespace atmoz
#endif  // VM_H
