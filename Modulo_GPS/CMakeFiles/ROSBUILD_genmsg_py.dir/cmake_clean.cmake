FILE(REMOVE_RECURSE
  "msg_gen"
  "msg_gen"
  "src/Modulo_GPS/msg"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "src/Modulo_GPS/msg/__init__.py"
  "src/Modulo_GPS/msg/_msg_errores.py"
  "src/Modulo_GPS/msg/_msg_gps.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
