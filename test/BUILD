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
    "@com_google_googletest//:gtest_main",
    "//inc/ext:rapidcsv",
    ":test_data",
  ],
)
