cc_library (
    name = "impl",
    srcs = glob(["*.cc"]),
    hdrs = glob(["inc/*.h"]),
)

cc_binary (
   name = "main",
   srcs = ["main.cc"],
   deps = [":impl"],
)
