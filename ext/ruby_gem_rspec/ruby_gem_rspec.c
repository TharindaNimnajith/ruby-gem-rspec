#include "ruby_gem_rspec.h"

VALUE rb_mRubyGemRspec;

void
Init_ruby_gem_rspec(void)
{
  rb_mRubyGemRspec = rb_define_module("RubyGemRspec");
}
