load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "test_data",
    hdrs = ["test_data.h"],
)

cc_test(
    name = "hello_test",
    size = "small",
    srcs = ["hello_test.cc"],
    deps = [
        ":test_data",
        "//inc/ext:rapidcsv",
        "//src:game_objects",
        "@com_google_googletest//:gtest_main",
    ],
)
