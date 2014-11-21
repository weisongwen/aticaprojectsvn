
(cl:in-package :asdf)

(defsystem "CITIUS_Control_Communication-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "msg_ctrlFrontCamera" :depends-on ("_package_msg_ctrlFrontCamera"))
    (:file "_package_msg_ctrlFrontCamera" :depends-on ("_package"))
    (:file "msg_electricInfo" :depends-on ("_package_msg_electricInfo"))
    (:file "_package_msg_electricInfo" :depends-on ("_package"))
    (:file "msg_posOriInfo" :depends-on ("_package_msg_posOriInfo"))
    (:file "_package_msg_posOriInfo" :depends-on ("_package"))
    (:file "msg_panTiltPosition" :depends-on ("_package_msg_panTiltPosition"))
    (:file "_package_msg_panTiltPosition" :depends-on ("_package"))
    (:file "msg_frontCameraInfo" :depends-on ("_package_msg_frontCameraInfo"))
    (:file "_package_msg_frontCameraInfo" :depends-on ("_package"))
    (:file "msg_irinfo" :depends-on ("_package_msg_irinfo"))
    (:file "_package_msg_irinfo" :depends-on ("_package"))
    (:file "msg_tvinfo" :depends-on ("_package_msg_tvinfo"))
    (:file "_package_msg_tvinfo" :depends-on ("_package"))
    (:file "msg_echoesFound" :depends-on ("_package_msg_echoesFound"))
    (:file "_package_msg_echoesFound" :depends-on ("_package"))
    (:file "msg_command" :depends-on ("_package_msg_command"))
    (:file "_package_msg_command" :depends-on ("_package"))
    (:file "msg_vehicleInfo" :depends-on ("_package_msg_vehicleInfo"))
    (:file "_package_msg_vehicleInfo" :depends-on ("_package"))
    (:file "msg_electricCommand" :depends-on ("_package_msg_electricCommand"))
    (:file "_package_msg_electricCommand" :depends-on ("_package"))
    (:file "msg_ctrlRearCamera" :depends-on ("_package_msg_ctrlRearCamera"))
    (:file "_package_msg_ctrlRearCamera" :depends-on ("_package"))
    (:file "msg_rearCameraInfo" :depends-on ("_package_msg_rearCameraInfo"))
    (:file "_package_msg_rearCameraInfo" :depends-on ("_package"))
  ))