FILE(REMOVE_RECURSE
  "msg_gen"
  "srv_gen"
  "msg_gen"
  "srv_gen"
  "src/CITIUS_Control_RearCamera/msg"
  "src/CITIUS_Control_RearCamera/srv"
  "CMakeFiles/rosbuild_precompile"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/rosbuild_precompile.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
