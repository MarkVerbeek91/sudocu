load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":tools",
    ],
)

cc_library(
    name = "game_objects",
    srcs = ["number.cpp"],
    hdrs = ["number.hpp"],
    visibility = [
        "//test:__pkg__",
    ],
)

cc_library(
    name = "tools",
    srcs = ["parser.cpp"],
    hdrs = ["parser.hpp"],
    visibility = ["//test:__pkg__"],
    deps = [
        "//inc/ext:rapidcsv",
    ],
)
