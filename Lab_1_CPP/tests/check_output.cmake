execute_process(
    COMMAND "${PROGRAM}" "${INPUT_FILE}"
    RESULT_VARIABLE RESULT
    OUTPUT_VARIABLE ACTUAL
    ERROR_VARIABLE ERROR
)

if(NOT RESULT EQUAL 0)
    message(FATAL_ERROR "Program failed: ${ERROR}")
endif()

file(READ "${EXPECTED_FILE}" EXPECTED)

string(STRIP "${ACTUAL}" ACTUAL)
string(STRIP "${EXPECTED}" EXPECTED)

if(NOT ACTUAL STREQUAL EXPECTED)
    message(FATAL_ERROR
        "Output is incorrect.\n"
        "Expected:\n${EXPECTED}\n"
        "Actual:\n${ACTUAL}\n"
    )
endif()

message("Test passed")
