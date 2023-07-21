load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "test_data",
    hdrs = ["test_data.h"],
)

cc_test(
    name = "parser_test",
    size = "small",
    srcs = ["parser_test.cpp"],
    deps = [
        ":test_data",
        "//src:tools",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "game_objects_test",
    size = "small",
    srcs = glob(
        ["*.cpp"],
        exclude = ["parser_test.cpp"],
    ),
    deps = [
        "//src:game_objects",
        "@com_google_googletest//:gtest_main",
    ],
)
