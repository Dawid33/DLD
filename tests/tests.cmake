# Put all the executables in their own folder
if(NOT EXISTS "tests")
    file(MAKE_DIRECTORY "tests")
endif()

# Make all the following execuables put their output in that folder.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "tests")

link_libraries(DLD)
include_directories("include/private")


# LIBRARY UNIT TESTS
#add_executable( "tests/parse_markdown.cpp")

#add_test(
#    NAME Blockize_line
#    COMMAND $<TARGET_FILE:parse_markdown_test> test_file.md
#)