load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        "//inc/ext:rapidcsv",
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
