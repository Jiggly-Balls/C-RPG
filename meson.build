project(
  'c-rpg',
  'c',
  default_options : ['c_std=c11'],
)

include = include_directories('include')

srcs = [
  'src/main.c',
  'src/utils/terminal.c',
  'src/utils/state_table.c',
  'src/core/game.c',
  'src/core/menu.c',
]

executable(
  'C-RPG',
  srcs,
  include_directories : include,
  c_args : ['-Wall', '-Wextra', '-pedantic-errors']
)