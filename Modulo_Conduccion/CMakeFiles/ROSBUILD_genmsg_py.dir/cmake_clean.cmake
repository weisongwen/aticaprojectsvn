FILE(REMOVE_RECURSE
  "msg_gen"
  "msg_gen"
  "src/Modulo_Conduccion/msg"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "src/Modulo_Conduccion/msg/__init__.py"
  "src/Modulo_Conduccion/msg/_msg_gest_navegacion.py"
  "src/Modulo_Conduccion/msg/_msg_com_teleoperado.py"
  "src/Modulo_Conduccion/msg/_msg_errores.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
