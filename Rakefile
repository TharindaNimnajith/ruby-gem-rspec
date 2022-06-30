# frozen_string_literal: true

require "bundler/gem_tasks"
require "rspec/core/rake_task"

RSpec::Core::RakeTask.new(:spec)

require "standard/rake"

require "rake/extensiontask"

task build: :compile

Rake::ExtensionTask.new("ruby_gem_rspec") do |ext|
  ext.lib_dir = "lib/ruby_gem_rspec"
end

task default: %i[clobber compile spec standard]
