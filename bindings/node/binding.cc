#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_php();
extern "C" TSLanguage * tree_sitter_php_only();

namespace {

NAN_METHOD(New) {}

void Init(Local<Object> exports, Local<Object> module) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> constructor = Nan::GetFunction(tpl).ToLocalChecked();

  Local<Object> instance = constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(instance, 0, tree_sitter_php());
  Nan::Set(instance, Nan::New("name").ToLocalChecked(), Nan::New("php").ToLocalChecked());
  Nan::Set(module, Nan::New("php").ToLocalChecked(), instance);

  Local<Object> instance_only = constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(instance_only, 0, tree_sitter_php_only());
  Nan::Set(instance_only, Nan::New("name").ToLocalChecked(), Nan::New("php_only").ToLocalChecked());
  Nan::Set(module, Nan::New("php_only").ToLocalChecked(), instance_only);
}

NODE_MODULE(tree_sitter_php_binding, Init)

}  // namespace
