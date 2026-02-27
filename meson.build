project(
  'c-rpg',
  'c',
  default_options : ['c_std=c11'],
)

include = include_directories('include')

srcs = [
  'src/main.c',
  'src/utils/terminal.c',
]

executable(
  'C-RPG',
  srcs,
  include_directories : include,
)