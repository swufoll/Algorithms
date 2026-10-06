execute_process(
    COMMAND ${PROGRAM} ${INPUT_FILE}
    OUTPUT_VARIABLE ACTUAL
    RESULT_VARIABLE RESULT
)

if(NOT RESULT EQUAL 0)
    message(FATAL_ERROR "Program failed")
endif()

file(READ ${EXPECTED_FILE} EXPECTED)

string(STRIP "${ACTUAL}" ACTUAL)
string(STRIP "${EXPECTED}" EXPECTED)

if(NOT ACTUAL STREQUAL EXPECTED)
    message(FATAL_ERROR "Output is incorrect")
endif()
