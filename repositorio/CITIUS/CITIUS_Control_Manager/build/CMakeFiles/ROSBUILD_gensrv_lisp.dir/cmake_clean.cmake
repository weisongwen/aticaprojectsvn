FILE(REMOVE_RECURSE
  "../srv_gen"
  "../srv_gen"
  "../src/CITIUS_Control_Manager/srv"
  "CMakeFiles/ROSBUILD_gensrv_lisp"
  "../srv_gen/lisp/srv_status.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_srv_status.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
