project(
  'project', 'c',
  version: '10.8.0',
  license: 'LGPLv2+',
  meson_version: '>= 0.56.0',
  default_options: [
    'buildtype=debugoptimized',
    'b_pie=true',
    'c_std=gnu99',
    'warning_level=2',
  ],
)

incdir = include_directories('include')

source_files = [
    'main.c',
]

executable(
    'project',
    source_files,
    include_directories : incdir,
)
