add_llvm_component_library(LLVMK3SDesc
  K3SMCTargetDescr.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  K3S
  )
