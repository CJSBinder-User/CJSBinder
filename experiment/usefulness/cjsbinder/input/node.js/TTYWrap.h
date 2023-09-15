class Environment;
template<typename T>
class Local;
class Object;
struct uv_handle_type;
class TTYWrap{
public:
  TTYWrap(Environment* env,Local<Object> wrap,int,bool);
  uv_handle_type uv_guess_handle(int fd);
  int uv_tty_get_winsize();
  int uv_tty_set_mode(bool t); 
};