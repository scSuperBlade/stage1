; Auto-generated. Do not edit!


(cl:in-package messages-msg)


;//! \htmlinclude ArmorDetectionGoal.msg.html

(cl:defclass <ArmorDetectionGoal> (roslisp-msg-protocol:ros-message)
  ((command
    :reader command
    :initarg :command
    :type cl:integer
    :initform 0))
)

(cl:defclass ArmorDetectionGoal (<ArmorDetectionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ArmorDetectionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ArmorDetectionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name messages-msg:<ArmorDetectionGoal> is deprecated: use messages-msg:ArmorDetectionGoal instead.")))

(cl:ensure-generic-function 'command-val :lambda-list '(m))
(cl:defmethod command-val ((m <ArmorDetectionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader messages-msg:command-val is deprecated.  Use messages-msg:command instead.")
  (command m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ArmorDetectionGoal>) ostream)
  "Serializes a message object of type '<ArmorDetectionGoal>"
  (cl:let* ((signed (cl:slot-value msg 'command)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ArmorDetectionGoal>) istream)
  "Deserializes a message object of type '<ArmorDetectionGoal>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'command) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ArmorDetectionGoal>)))
  "Returns string type for a message object of type '<ArmorDetectionGoal>"
  "messages/ArmorDetectionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ArmorDetectionGoal)))
  "Returns string type for a message object of type 'ArmorDetectionGoal"
  "messages/ArmorDetectionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ArmorDetectionGoal>)))
  "Returns md5sum for a message object of type '<ArmorDetectionGoal>"
  "3a54bc0c5f4abe9ad44d29292ec0800d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ArmorDetectionGoal)))
  "Returns md5sum for a message object of type 'ArmorDetectionGoal"
  "3a54bc0c5f4abe9ad44d29292ec0800d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ArmorDetectionGoal>)))
  "Returns full string definition for message of type '<ArmorDetectionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#Send a flag to server to control the thread start, pause, restart and stop~%#command == 1 start~%#command == 2 pause~%#command == 3 stop~%int32 command~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ArmorDetectionGoal)))
  "Returns full string definition for message of type 'ArmorDetectionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#Send a flag to server to control the thread start, pause, restart and stop~%#command == 1 start~%#command == 2 pause~%#command == 3 stop~%int32 command~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ArmorDetectionGoal>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ArmorDetectionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'ArmorDetectionGoal
    (cl:cons ':command (command msg))
))
