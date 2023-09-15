class AsyncWrap{
public:
  inline double get_async_id() const;
  void AsyncReset(double execution_async_id = -1, bool silent = false);
};