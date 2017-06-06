
add_executable(ct1_test_welcome
     ct1_test_welcome.c
)
target_link_libraries(ct1_test_welcome sub::welcome)