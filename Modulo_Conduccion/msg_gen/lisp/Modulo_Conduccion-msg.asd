
(cl:in-package :asdf)

(defsystem "Modulo_Conduccion-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "msg_switch" :depends-on ("_package_msg_switch"))
    (:file "_package_msg_switch" :depends-on ("_package"))
    (:file "msg_engine_brake" :depends-on ("_package_msg_engine_brake"))
    (:file "_package_msg_engine_brake" :depends-on ("_package"))
    (:file "msg_com_teleop" :depends-on ("_package_msg_com_teleop"))
    (:file "_package_msg_com_teleop" :depends-on ("_package"))
    (:file "msg_emergency_stop" :depends-on ("_package_msg_emergency_stop"))
    (:file "_package_msg_emergency_stop" :depends-on ("_package"))
    (:file "msg_backup" :depends-on ("_package_msg_backup"))
    (:file "_package_msg_backup" :depends-on ("_package"))
    (:file "msg_error" :depends-on ("_package_msg_error"))
    (:file "_package_msg_error" :depends-on ("_package"))
    (:file "msg_info_stop" :depends-on ("_package_msg_info_stop"))
    (:file "_package_msg_info_stop" :depends-on ("_package"))
    (:file "msg_navigation" :depends-on ("_package_msg_navigation"))
    (:file "_package_msg_navigation" :depends-on ("_package"))
  ))