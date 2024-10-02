#!/usr/bin/env python

# Usage: Extract the pl_otherpoke.narc file from your existing Platinum ROM
# using a tool such as Tinke, then run this script to extract its assets
# into your pokeplatinum project's folder structure:
#
#   python unpack_pl_otherpoke.py
#
# Extracted PNGs will not be optimized for you, so numerous files will
# likely show in the diff. If you wish to optimize your PNGs, then install
# optipng from your distro's package manager, then run the following commands:
#
#   find res/pokemon -name '*_front.png' -exec optipng -clobber -force -strip all -o7 -np {} +
#   find res/pokemon -name '*_back.png' -exec optipng -clobber -force -strip all -o7 -np {} +

import pathlib
import shutil
import subprocess


KNARC = pathlib.Path('./build/subprojects/knarc/knarc')
NITROGFX = pathlib.Path('./build/subprojects/nitrogfx/nitrogfx')

# Mapping of the image entries in otherpoke
PALETTE_MAP = [
    154,    # deoxys
    154,
    154,
    154,
    154,
    154,
    154,
    154,    # 7
    156,    # unown
    156,
    156,    # 10
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,    # 20
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,    # 30
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,    # 40
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,    # 50
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,
    156,    # 60
    156,
    156,
    156,    # 63
    158,    # castform
    159,
    160,
    161,
    158,
    159,
    160,
    161,    # 71
    166,    # burmy
    166,
    168,
    168,
    170,
    170,    # 77
    172,    # wormadam
    172,
    174,
    174,
    176,
    176,    # 83
    178,    # shellos
    178,
    180,
    180,    # 87
    182,    # gastrodon
    182,
    184,
    184,    # 91
    186,    # cherrim
    187,
    186,
    187,    # 95
    190,    # arceus
    190,
    192,
    192,
    194,
    194,
    196,
    196,
    198,
    198,
    200,
    200,
    202,
    202,
    204,
    204,
    206,
    206,
    208,
    208,
    210,
    210,
    212,
    212,
    214,
    214,
    216,
    216,
    218,
    218,
    220,
    220,
    222,
    222,
    224,
    224,    # 131
    226,    # egg
    227,    # 133
    228,    # shaymin
    228,
    230,
    230,    # 137
    232,    # rotom
    232,
    234,
    234,
    236,
    236,
    238,
    238,
    240,
    240,
    242,
    242,    # 149
    244,    # giratina
    244,
    246,
    246,
]

OTHERPOKE_INDEX = [
    'deoxys/forms/base/back.png',
    'deoxys/forms/base/front.png',
    'deoxys/forms/attack/back.png',
    'deoxys/forms/attack/front.png',
    'deoxys/forms/defense/back.png',
    'deoxys/forms/defense/front.png',
    'deoxys/forms/speed/back.png',
    'deoxys/forms/speed/front.png',
    'unown/forms/base/back.png',
    'unown/forms/base/front.png',
    'unown/forms/b/back.png',
    'unown/forms/b/front.png',
    'unown/forms/c/back.png',
    'unown/forms/c/front.png',
    'unown/forms/d/back.png',
    'unown/forms/d/front.png',
    'unown/forms/e/back.png',
    'unown/forms/e/front.png',
    'unown/forms/f/back.png',
    'unown/forms/f/front.png',
    'unown/forms/g/back.png',
    'unown/forms/g/front.png',
    'unown/forms/h/back.png',
    'unown/forms/h/front.png',
    'unown/forms/i/back.png',
    'unown/forms/i/front.png',
    'unown/forms/j/back.png',
    'unown/forms/j/front.png',
    'unown/forms/k/back.png',
    'unown/forms/k/front.png',
    'unown/forms/l/back.png',
    'unown/forms/l/front.png',
    'unown/forms/m/back.png',
    'unown/forms/m/front.png',
    'unown/forms/n/back.png',
    'unown/forms/n/front.png',
    'unown/forms/o/back.png',
    'unown/forms/o/front.png',
    'unown/forms/p/back.png',
    'unown/forms/p/front.png',
    'unown/forms/q/back.png',
    'unown/forms/q/front.png',
    'unown/forms/r/back.png',
    'unown/forms/r/front.png',
    'unown/forms/s/back.png',
    'unown/forms/s/front.png',
    'unown/forms/t/back.png',
    'unown/forms/t/front.png',
    'unown/forms/u/back.png',
    'unown/forms/u/front.png',
    'unown/forms/v/back.png',
    'unown/forms/v/front.png',
    'unown/forms/w/back.png',
    'unown/forms/w/front.png',
    'unown/forms/x/back.png',
    'unown/forms/x/front.png',
    'unown/forms/y/back.png',
    'unown/forms/y/front.png',
    'unown/forms/z/back.png',
    'unown/forms/z/front.png',
    'unown/forms/exc/back.png',
    'unown/forms/exc/front.png',
    'unown/forms/que/back.png',
    'unown/forms/que/front.png',    # 63
    'castform/forms/base/back.png',
    'castform/forms/sunny/back.png',
    'castform/forms/rainy/back.png',
    'castform/forms/snowy/back.png',
    'castform/forms/base/front.png',
    'castform/forms/sunny/front.png',
    'castform/forms/rainy/front.png',
    'castform/forms/snowy/front.png', # 71
    'burmy/forms/base/back.png',
    'burmy/forms/base/front.png',
    'burmy/forms/sandy/back.png',
    'burmy/forms/sandy/front.png',
    'burmy/forms/trash/back.png',
    'burmy/forms/trash/front.png',  # 77
    'wormadam/forms/base/back.png',
    'wormadam/forms/base/front.png',
    'wormadam/forms/sandy/back.png',
    'wormadam/forms/sandy/front.png',
    'wormadam/forms/trash/back.png',
    'wormadam/forms/trash/front.png',   # 83
    'shellos/forms/base/back.png',
    'shellos/forms/east_sea/back.png',
    'shellos/forms/base/front.png',
    'shellos/forms/east_sea/front.png', # 87
    'gastrodon/forms/base/back.png',
    'gastrodon/forms/east_sea/back.png',
    'gastrodon/forms/base/front.png',
    'gastrodon/forms/east_sea/front.png',   # 91
    'cherrim/forms/base/back.png',
    'cherrim/forms/sunny/back.png',
    'cherrim/forms/base/front.png',
    'cherrim/forms/sunny/front.png',    # 95
    'arceus/forms/base/back.png',
    'arceus/forms/base/front.png',
    'arceus/forms/fighting/back.png',
    'arceus/forms/fighting/front.png',
    'arceus/forms/flying/back.png',
    'arceus/forms/flying/front.png',
    'arceus/forms/poison/back.png',
    'arceus/forms/poison/front.png',
    'arceus/forms/ground/back.png',
    'arceus/forms/ground/front.png',
    'arceus/forms/rock/back.png',
    'arceus/forms/rock/front.png',
    'arceus/forms/bug/back.png',
    'arceus/forms/bug/front.png',
    'arceus/forms/ghost/back.png',
    'arceus/forms/ghost/front.png',
    'arceus/forms/steel/back.png',
    'arceus/forms/steel/front.png',
    'arceus/forms/mystery/back.png',
    'arceus/forms/mystery/front.png',
    'arceus/forms/fire/back.png',
    'arceus/forms/fire/front.png',
    'arceus/forms/water/back.png',
    'arceus/forms/water/front.png',
    'arceus/forms/grass/back.png',
    'arceus/forms/grass/front.png',
    'arceus/forms/electric/back.png',
    'arceus/forms/electric/front.png',
    'arceus/forms/psychic/back.png',
    'arceus/forms/psychic/front.png',
    'arceus/forms/ice/back.png',
    'arceus/forms/ice/front.png',
    'arceus/forms/dragon/back.png',
    'arceus/forms/dragon/front.png',
    'arceus/forms/dark/back.png',
    'arceus/forms/dark/front.png',  # 131
    'egg/front.png',
    'egg/forms/manaphy/front.png',  # 133
    'shaymin/forms/base/back.png',
    'shaymin/forms/base/front.png',
    'shaymin/forms/sky/back.png',
    'shaymin/forms/sky/front.png',  # 137
    'rotom/forms/base/back.png',
    'rotom/forms/base/front.png',
    'rotom/forms/heat/back.png',
    'rotom/forms/heat/front.png',
    'rotom/forms/wash/back.png',
    'rotom/forms/wash/front.png',
    'rotom/forms/frost/back.png',
    'rotom/forms/frost/front.png',
    'rotom/forms/fan/back.png',
    'rotom/forms/fan/front.png',
    'rotom/forms/mow/back.png',
    'rotom/forms/mow/front.png',    # 149
    'giratina/forms/base/back.png',
    'giratina/forms/base/front.png',
    'giratina/forms/origin/back.png',
    'giratina/forms/origin/front.png',  # 153
    'deoxys/forms/base/normal.pal',
    'deoxys/forms/base/shiny.pal',  # 155
    'unown/forms/base/normal.pal',
    'unown/forms/base/shiny.pal',   # 157
    'castform/forms/base/normal.pal',
    'castform/forms/sunny/normal.pal',
    'castform/forms/rainy/normal.pal',
    'castform/forms/snowy/normal.pal',
    'castform/forms/base/shiny.pal',
    'castform/forms/sunny/shiny.pal',
    'castform/forms/rainy/shiny.pal',
    'castform/forms/snowy/shiny.pal',   # 165
    'burmy/forms/base/normal.pal',
    'burmy/forms/base/shiny.pal',
    'burmy/forms/sandy/normal.pal',
    'burmy/forms/sandy/shiny.pal',
    'burmy/forms/trash/normal.pal',
    'burmy/forms/trash/shiny.pal',  # 171
    'wormadam/forms/base/normal.pal',
    'wormadam/forms/base/shiny.pal',
    'wormadam/forms/sandy/normal.pal',
    'wormadam/forms/sandy/shiny.pal',
    'wormadam/forms/trash/normal.pal',
    'wormadam/forms/trash/shiny.pal',   # 177
    'shellos/forms/base/normal.pal',
    'shellos/forms/base/shiny.pal',
    'shellos/forms/east_sea/normal.pal',
    'shellos/forms/east_sea/shiny.pal', # 181
    'gastrodon/forms/base/normal.pal',
    'gastrodon/forms/base/shiny.pal',
    'gastrodon/forms/east_sea/normal.pal',
    'gastrodon/forms/east_sea/shiny.pal',   # 185
    'cherrim/forms/base/normal.pal',
    'cherrim/forms/sunny/normal.pal',
    'cherrim/forms/base/shiny.pal',
    'cherrim/forms/sunny/shiny.pal',    # 189
    'arceus/forms/base/normal.pal',
    'arceus/forms/base/shiny.pal',
    'arceus/forms/fighting/normal.pal',
    'arceus/forms/fighting/shiny.pal',
    'arceus/forms/flying/normal.pal',
    'arceus/forms/flying/shiny.pal',
    'arceus/forms/poison/normal.pal',
    'arceus/forms/poison/shiny.pal',
    'arceus/forms/ground/normal.pal',
    'arceus/forms/ground/shiny.pal',
    'arceus/forms/rock/normal.pal',
    'arceus/forms/rock/shiny.pal',
    'arceus/forms/bug/normal.pal',
    'arceus/forms/bug/shiny.pal',
    'arceus/forms/ghost/normal.pal',
    'arceus/forms/ghost/shiny.pal',
    'arceus/forms/steel/normal.pal',
    'arceus/forms/steel/shiny.pal',
    'arceus/forms/mystery/normal.pal',
    'arceus/forms/mystery/shiny.pal',
    'arceus/forms/fire/normal.pal',
    'arceus/forms/fire/shiny.pal',
    'arceus/forms/water/normal.pal',
    'arceus/forms/water/shiny.pal',
    'arceus/forms/grass/normal.pal',
    'arceus/forms/grass/shiny.pal',
    'arceus/forms/electric/normal.pal',
    'arceus/forms/electric/shiny.pal',
    'arceus/forms/psychic/normal.pal',
    'arceus/forms/psychic/shiny.pal',
    'arceus/forms/ice/normal.pal',
    'arceus/forms/ice/shiny.pal',
    'arceus/forms/dragon/normal.pal',
    'arceus/forms/dragon/shiny.pal',
    'arceus/forms/dark/normal.pal',
    'arceus/forms/dark/shiny.pal',  # 225
    'egg/normal.pal',
    'egg/forms/manaphy/normal.pal', # 227
    'shaymin/forms/base/normal.pal',
    'shaymin/forms/base/shiny.pal',
    'shaymin/forms/sky/normal.pal',
    'shaymin/forms/sky/shiny.pal',  # 231
    'rotom/forms/base/normal.pal',
    'rotom/forms/base/shiny.pal',
    'rotom/forms/heat/normal.pal',
    'rotom/forms/heat/shiny.pal',
    'rotom/forms/wash/normal.pal',
    'rotom/forms/wash/shiny.pal',
    'rotom/forms/frost/normal.pal',
    'rotom/forms/frost/shiny.pal',
    'rotom/forms/fan/normal.pal',
    'rotom/forms/fan/shiny.pal',
    'rotom/forms/mow/normal.pal',
    'rotom/forms/mow/shiny.pal',    # 243
    'giratina/forms/base/normal.pal',
    'giratina/forms/base/shiny.pal',
    'giratina/forms/origin/normal.pal',
    'giratina/forms/origin/shiny.pal',  # 247
    '.shared/substitute_back.png',
    '.shared/substitute_front.png',
    '.shared/substitute.pal',
    '.shared/shadows.png',
    '.shared/shadows.pal',  # 252
]

pl_otherpoke_narc = pathlib.Path('pl_otherpoke.narc')
if not pl_otherpoke_narc.exists():
    raise IOError('pl_otherpoke.narc not found in current working directory')

working_dir = pathlib.Path('work')
working_dir.mkdir(parents=True, exist_ok=True)
subprocess.run([
    KNARC,
    '-d', working_dir,
    '-u', pl_otherpoke_narc,
])

res_pokemon_root = pathlib.Path('res/pokemon')

# First pass: Update all extensions to Nitro equivalents
for i, target in enumerate(OTHERPOKE_INDEX):
    ext = 'NCGR' if target.endswith('.png') else 'NCLR'
    bin = working_dir / f'pl_otherpoke_{i:08}.bin'
    ntr = working_dir / f'pl_otherpoke_{i:08}.{ext}'
    shutil.move(bin, ntr)

# Second pass: Convert files into the project tree
# Mon images first: 154 entries
for i in range(154):
    ntr = working_dir / f'pl_otherpoke_{i:08}.NCGR'
    pal = working_dir / f'pl_otherpoke_{PALETTE_MAP[i]:08}.NCLR'
    subprocess.run([
        NITROGFX,
        ntr,
        res_pokemon_root / OTHERPOKE_INDEX[i],
        '-palette', pal,
        '-scanfronttoback',
        '-handleempty',
    ])

# Mon palettes second: 94 entries
for i in range(154, 248):
    subprocess.run([
        NITROGFX,
        working_dir / f'pl_otherpoke_{i:08}.NCLR',
        res_pokemon_root / OTHERPOKE_INDEX[i],
        '-bitdepth', '8',
    ])

# Batch of shared files at the end (substitute doll and shadows)
shared_root = res_pokemon_root / '.shared'
subprocess.run([
    NITROGFX,
    working_dir / 'pl_otherpoke_00000248.NCGR',
    shared_root / 'substitute_back.png',
    '-palette', working_dir / 'pl_otherpoke_00000250.NCLR',
    '-scanfronttoback',
    '-handleempty',
])
subprocess.run([
    NITROGFX,
    working_dir / 'pl_otherpoke_00000249.NCGR',
    shared_root / 'substitute_front.png',
    '-palette', working_dir / 'pl_otherpoke_00000250.NCLR',
    '-scanfronttoback',
    '-handleempty',
])
subprocess.run([
    NITROGFX,
    working_dir / 'pl_otherpoke_00000250.NCLR',
    shared_root / 'substitute.pal',
    '-bitdepth', '8',
])
subprocess.run([
    NITROGFX,
    working_dir / 'pl_otherpoke_00000251.NCGR',
    shared_root / 'shadows.png',
    '-palette', working_dir / 'pl_otherpoke_00000252.NCLR',
    '-scanfronttoback',
    '-handleempty',
])
subprocess.run([
    NITROGFX,
    working_dir / 'pl_otherpoke_00000252.NCLR',
    shared_root / 'shadows.pal',
    '-bitdepth', '8',
])