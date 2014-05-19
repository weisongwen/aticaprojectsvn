
(cl:in-package :asdf)

(defsystem "Common_files-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "msg_switch" :depends-on ("_package_msg_switch"))
    (:file "_package_msg_switch" :depends-on ("_package"))
    (:file "msg_fcn_aux" :depends-on ("_package_msg_fcn_aux"))
    (:file "_package_msg_fcn_aux" :depends-on ("_package"))
    (:file "msg_com_teleop" :depends-on ("_package_msg_com_teleop"))
    (:file "_package_msg_com_teleop" :depends-on ("_package"))
    (:file "msg_emergency_stop" :depends-on ("_package_msg_emergency_stop"))
    (:file "_package_msg_emergency_stop" :depends-on ("_package"))
    (:file "msg_rangedatafusion" :depends-on ("_package_msg_rangedatafusion"))
    (:file "_package_msg_rangedatafusion" :depends-on ("_package"))
    (:file "msg_available" :depends-on ("_package_msg_available"))
    (:file "_package_msg_available" :depends-on ("_package"))
    (:file "msg_backup" :depends-on ("_package_msg_backup"))
    (:file "_package_msg_backup" :depends-on ("_package"))
    (:file "msg_waypoint" :depends-on ("_package_msg_waypoint"))
    (:file "_package_msg_waypoint" :depends-on ("_package"))
    (:file "msg_mode" :depends-on ("_package_msg_mode"))
    (:file "_package_msg_mode" :depends-on ("_package"))
    (:file "msg_module_enable" :depends-on ("_package_msg_module_enable"))
    (:file "_package_msg_module_enable" :depends-on ("_package"))
    (:file "msg_error" :depends-on ("_package_msg_error"))
    (:file "_package_msg_error" :depends-on ("_package"))
    (:file "msg_gps" :depends-on ("_package_msg_gps"))
    (:file "_package_msg_gps" :depends-on ("_package"))
    (:file "msg_ctrl_camera" :depends-on ("_package_msg_ctrl_camera"))
    (:file "_package_msg_ctrl_camera" :depends-on ("_package"))
    (:file "msg_stream" :depends-on ("_package_msg_stream"))
    (:file "_package_msg_stream" :depends-on ("_package"))
    (:file "msg_laser" :depends-on ("_package_msg_laser"))
    (:file "_package_msg_laser" :depends-on ("_package"))
    (:file "msg_camera" :depends-on ("_package_msg_camera"))
    (:file "_package_msg_camera" :depends-on ("_package"))
    (:file "msg_info_stop" :depends-on ("_package_msg_info_stop"))
    (:file "_package_msg_info_stop" :depends-on ("_package"))
    (:file "msg_navigation" :depends-on ("_package_msg_navigation"))
    (:file "_package_msg_navigation" :depends-on ("_package"))
  ))