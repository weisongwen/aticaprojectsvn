FILE(REMOVE_RECURSE
  "msg_gen"
  "srv_gen"
  "msg_gen"
  "srv_gen"
  "src/CITIUS_Control_Electric/msg"
  "src/CITIUS_Control_Electric/srv"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "src/CITIUS_Control_Electric/msg/__init__.py"
  "src/CITIUS_Control_Electric/msg/_msg_electricCommand.py"
  "src/CITIUS_Control_Electric/msg/_msg_electricInfo.py"
  "src/CITIUS_Control_Electric/msg/_msg_switcher.py"
  "src/CITIUS_Control_Electric/msg/_msg_command.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
