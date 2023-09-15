//node.js:node_file.cc

void FileHandle::New(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  CHECK(args.IsConstructCall());
  CHECK(args[0]->IsInt32());
  int fd = args[0].As<Int32>()->Value();
  FileHandle* handle = new FileHandle(env, fd, args.This());
}
void FileHandle::Close(const FunctionCallbackInfo<Value>& args) {
  FileHandle* fd;
  ASSIGN_OR_RETURN_UNWRAP(&fd, args.Holder());
  MaybeLocal<Promise> cres = ptr->ClosePromise();
  Local<Promise> jsres = cres.ToLocalChecked();
  args.GetReturnValue().Set(jsres);
}
void FileHandle::ReleaseFD(const FunctionCallbackInfo<Value>& args) {
  FileHandle* fd;
  ASSIGN_OR_RETURN_UNWRAP(&fd, args.Holder());
  fd->AfterClose();
}

//register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> fd = env->NewFunctionTemplate(FileHandle::New);
  env->SetProtoMethod(fd, "close", FileHandle::Close);
  env->SetProtoMethod(fd, "releaseFD", FileHandle::ReleaseFD);
  fd->InstanceTemplate()->SetInternalFieldCount(1);;
  Local<String> handleString = FIXED_ONE_BYTE_STRING(isolate, "FileHandle");
  fd->SetClassName(handleString);
  target->Set(context, handleString,fd->GetFunction(context).ToLocalChecked());
}

