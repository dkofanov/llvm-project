#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

Target &getTheK3STarget() {
  static Target TheK3STarget;
  return TheK3STarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeK3STargetInfo() {
  RegisterTarget<Triple::arc> X(getTheK3STarget(), "k3s", "Dynamically typed K3S Virtual Machine", "K3S");
}
