cc_library(
    name = "lib",
    srcs = glob(
        ["*.cc"],
        exclude = [
            "*_test.cc",
            "*_benchmark.cc",
        ],
    ),
    hdrs = glob(["*.h"]),
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "benchmark",
    srcs = ["client_benchmark.cc"],
    deps = [
        ":lib",
        "@google_benchmark//:benchmark",
    ],
)

cc_test(
    name = "tests",
    size = "small",
    srcs = glob(["*_test.cc"]),
    deps = [
        ":lib",
        "@googletest//:gtest_main",
    ],
)