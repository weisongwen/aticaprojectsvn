; Auto-generated. Do not edit!


(cl:in-package Common_files-msg)


;//! \htmlinclude msg_mode.msg.html

(cl:defclass <msg_mode> (roslisp-msg-protocol:ros-message)
  ((type_msg
    :reader type_msg
    :initarg :type_msg
    :type cl:boolean
    :initform cl:nil)
   (mode
    :reader mode
    :initarg :mode
    :type cl:fixnum
    :initform 0)
   (status
    :reader status
    :initarg :status
    :type cl:fixnum
    :initform 0))
)

(cl:defclass msg_mode (<msg_mode>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <msg_mode>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'msg_mode)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name Common_files-msg:<msg_mode> is deprecated: use Common_files-msg:msg_mode instead.")))

(cl:ensure-generic-function 'type_msg-val :lambda-list '(m))
(cl:defmethod type_msg-val ((m <msg_mode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader Common_files-msg:type_msg-val is deprecated.  Use Common_files-msg:type_msg instead.")
  (type_msg m))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <msg_mode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader Common_files-msg:mode-val is deprecated.  Use Common_files-msg:mode instead.")
  (mode m))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <msg_mode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader Common_files-msg:status-val is deprecated.  Use Common_files-msg:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <msg_mode>) ostream)
  "Serializes a message object of type '<msg_mode>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'type_msg) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'status)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <msg_mode>) istream)
  "Deserializes a message object of type '<msg_mode>"
    (cl:setf (cl:slot-value msg 'type_msg) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'status)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<msg_mode>)))
  "Returns string type for a message object of type '<msg_mode>"
  "Common_files/msg_mode")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'msg_mode)))
  "Returns string type for a message object of type 'msg_mode"
  "Common_files/msg_mode")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<msg_mode>)))
  "Returns md5sum for a message object of type '<msg_mode>"
  "12533cc6dd5391d707d2b80afe5b51a7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'msg_mode)))
  "Returns md5sum for a message object of type 'msg_mode"
  "12533cc6dd5391d707d2b80afe5b51a7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<msg_mode>)))
  "Returns full string definition for message of type '<msg_mode>"
  (cl:format cl:nil "bool type_msg~%uint8 mode~%uint8 status~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'msg_mode)))
  "Returns full string definition for message of type 'msg_mode"
  (cl:format cl:nil "bool type_msg~%uint8 mode~%uint8 status~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <msg_mode>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <msg_mode>))
  "Converts a ROS message object to a list"
  (cl:list 'msg_mode
    (cl:cons ':type_msg (type_msg msg))
    (cl:cons ':mode (mode msg))
    (cl:cons ':status (status msg))
))
