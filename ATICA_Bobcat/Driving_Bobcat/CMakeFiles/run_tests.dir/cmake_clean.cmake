FILE(REMOVE_RECURSE
  "msg_gen"
  "srv_gen"
  "msg_gen"
  "srv_gen"
  "src/Driving_Bobcat/msg"
  "src/Driving_Bobcat/srv"
  "CMakeFiles/run_tests"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/run_tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
