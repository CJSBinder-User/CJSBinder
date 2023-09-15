%module example
template<typename T>
class Local;
class Value;
class Array;
class External;
class Http2Stream;
class nghttp2_origin_entry;
class Http2Session{
public:
  void Close(unsigned int code,bool socket_closed);
  void Consume(Local<External> external);
  Http2Stream* SubmitRequest(Local<Array>,unsigned int len,int options);
  void Goaway(unsigned int code,int lastStreamID,unsigned char* data,int len);
  void AltSvc(int id,unsigned char* origin,unsigned int origin_len,unsigned char* value,unsigned int value_len);
  void Origin(unsigned int count);
  bool AddSettings();
  bool AddPing();
};