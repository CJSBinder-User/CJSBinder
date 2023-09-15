%module example
struct nghttp2_nv;
class Http2Stream{
 public:
  int SubmitResponse(nghttp2_nv* l,unsigned int length,int options);
  int SubmitInfo(nghttp2_nv* l,unsigned int length);
  int SubmitTrailers(nghttp2_nv* l,unsigned int length);
  void SubmitRstStream(unsigned int code);
  Http2Stream* SubmitPushPromise(nghttp2_nv* l, unsigned int length,int options);
  int SubmitPriority(bool);
  void Destroy();
  void ReadStart();
  int id();
};
