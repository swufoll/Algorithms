add_executable(Average src/Average.cpp)
target_link_libraries(Average LibraryCPPClass)
target_include_directories(Average PRIVATE ${CMAKE_SOURCE_DIR}/LibraryCPPClass)

add_executable(RLE src/RLE.cpp)
target_link_libraries(RLE LibraryCPPClass)
target_include_directories(RLE PRIVATE ${CMAKE_SOURCE_DIR}/LibraryCPPClass)

add_test(
    NAME AverageTest1
    COMMAND ${CMAKE_COMMAND}
        -DPROGRAM=$<TARGET_FILE:Average>
        -DINPUT_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/average_1.txt
        -DEXPECTED_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/average_1_expected.txt
        -P ${CMAKE_CURRENT_SOURCE_DIR}/tests/check_output.cmake
)

add_test(
    NAME AverageTest2
    COMMAND ${CMAKE_COMMAND}
        -DPROGRAM=$<TARGET_FILE:Average>
        -DINPUT_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/average_2.txt
        -DEXPECTED_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/average_2_expected.txt
        -P ${CMAKE_CURRENT_SOURCE_DIR}/tests/check_output.cmake
)

add_test(
    NAME RLETest1
    COMMAND ${CMAKE_COMMAND}
        -DPROGRAM=$<TARGET_FILE:RLE>
        -DINPUT_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/rle_1.txt
        -DEXPECTED_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/rle_1_expected.txt
        -P ${CMAKE_CURRENT_SOURCE_DIR}/tests/check_output.cmake
)

add_test(
    NAME RLETest2
    COMMAND ${CMAKE_COMMAND}
        -DPROGRAM=$<TARGET_FILE:RLE>
        -DINPUT_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/rle_2.txt
        -DEXPECTED_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/rle_2_expected.txt
        -P ${CMAKE_CURRENT_SOURCE_DIR}/tests/check_output.cmake
)
