import os
from PIL import Image, ImageDraw, ImageFont

W, H = 1280, 720
img = Image.new("RGB", (W, H), "#020617")
draw = ImageDraw.Draw(img)

def rgb(h):
    h = h.lstrip('#')
    return tuple(int(h[i:i+2], 16) for i in (0, 2, 4))

MONO_BOLD = "/usr/share/fonts/truetype/dejavu/DejaVuSansMono-Bold.ttf"
MONO      = "/usr/share/fonts/truetype/dejavu/DejaVuSansMono.ttf"
SANS_BOLD = "/usr/share/fonts/truetype/liberation/LiberationSans-Bold.ttf"

def fnt(path, size):
    return ImageFont.truetype(path, size)

GREEN         = rgb("#1D9E75")
GREEN_DIM     = rgb("#0F5C45")
GREEN_MID     = rgb("#5DCAA5")
WHITE         = rgb("#EAEAEA")
CODE_BG       = rgb("#0C1410")
ELECTRIC_TEAL = rgb("#00F5D4")

for x in range(0, W, 64):
    draw.line([(x, 0), (x, H)], fill=(18, 35, 25), width=1)
for y in range(0, H, 64):
    draw.line([(0, y), (W, y)], fill=(18, 35, 25), width=1)

PX1, PY1, PX2, PY2 = 40, 40, 530, 680
draw.rectangle([PX1+4, PY1+4, PX2+4, PY2+4], fill=(0, 0, 0, 100))
draw.rectangle([PX1, PY1, PX2, PY2], fill=CODE_BG)
draw.rectangle([PX1, PY1, PX2, PY2], outline=GREEN_DIM, width=1)

draw.rectangle([PX1, PY1, PX2, PY1+44], fill=rgb("#0F1A13"))
draw.ellipse([PX1+14, PY1+13, PX1+30, PY1+29], fill=rgb("#FF5F57"))
draw.ellipse([PX1+38, PY1+13, PX1+54, PY1+29], fill=rgb("#FEBC2E"))
draw.ellipse([PX1+62, PY1+13, PX1+78, PY1+29], fill=rgb("#28C840"))

title_fnt = fnt(MONO, 17)
tw = draw.textlength("main.cpp", font=title_fnt)
draw.text(((PX1+PX2)//2 - tw//2, PY1+13), "main.cpp", font=title_fnt, fill=GREEN_MID)

code_lines = [
    [("#6272A4", "#include"), ("#8BE9FD", " <iostream>")],
    [],
    [("#FF79C6", "int"), ("#F8F8F2", " main"), ("#F8F8F2", "()")],
    [("#F8F8F2", "{")],
    [("#FF79C6", "    for"), ("#F8F8F2", " ("), ("#FF79C6", "int"), ("#F8F8F2", " i = "), ("#BD93F9", "0"), ("#F8F8F2", "; i < "), ("#BD93F9", "5"), ("#F8F8F2", "; i++"), ("#F8F8F2", " {")],
    [("#50FA7B", "        cout"), ("#F8F8F2", " << "), ("#F1FA8C", '"Step "'), ("#F8F8F2", " << i << "), ("#50FA7B", "endl"), ("#F8F8F2", ";")],
    [("#F8F8F2", "    }")],
    [],
    [("#FF79C6", "    return"), ("#BD93F9", " 0"), ("#F8F8F2", ";")],
    [("#F8F8F2", "}")],
]

nums_fnt = fnt(MONO, 18)
code_fnt = fnt(MONO, 18)
cy = PY1 + 62
lh = 44

for i, parts in enumerate(code_lines):
    draw.text((PX1+14, cy), str(i+1), font=nums_fnt, fill=rgb("#2E4A38"))
    cx = PX1 + 56
    for col, txt in parts:
        draw.text((cx, cy), txt, font=code_fnt, fill=rgb(col))
        cx += draw.textlength(txt, font=code_fnt)
    cy += lh

draw.rectangle([PX1, PY2-36, PX2, PY2], fill=rgb("#0F1A13"))
draw.text((PX1+14, PY2-27), "● C++  |  UTF-8  |  LF", font=fnt(MONO, 15), fill=GREEN_DIM)

for i in range(5):
    o = i * 14
    draw.polygon([(540+o, 0),(556+o,0),(330+o,H),(314+o,H)], fill=(15, 70, 45, 100))

RX = 580
cpp_fnt = fnt(MONO_BOLD, 230)
c_w  = int(draw.textlength("C", font=cpp_fnt))
c_bb = draw.textbbox((0,0), "C", font=cpp_fnt)
c_h  = c_bb[3] - c_bb[1]
cpp_y = 60

draw.text((RX+4, cpp_y+4), "C", font=cpp_fnt, fill=rgb("#00F5D4"))
draw.text((RX, cpp_y), "C", font=cpp_fnt, fill=GREEN)
draw.text((RX + c_w + 4, cpp_y), "++", font=cpp_fnt, fill=WHITE)

rule_y = cpp_y + c_h + 30
draw.rectangle([RX, rule_y, 1240, rule_y+4], fill=ELECTRIC_TEAL)

sub_fnt = fnt(SANS_BOLD, 52)
draw.text((RX, rule_y + 18), "ЦИКЛ", font=sub_fnt, fill=WHITE)
draw.text((RX, rule_y + 78), "for", font=sub_fnt, fill=GREEN_MID)

tag_y = rule_y + 158
tag_fnt = fnt(MONO_BOLD, 26)

b1_text = "  УРОК  4  "
b1_w = int(draw.textlength(b1_text, font=tag_fnt))
b1_h = 52
draw.rounded_rectangle([RX, tag_y, RX+b1_w, tag_y+b1_h], radius=6, fill=ELECTRIC_TEAL)
draw.text((RX+4, tag_y+10), b1_text, font=tag_fnt, fill=rgb("#020617"))

b2_text = "  for  "
b2_w = int(draw.textlength(b2_text, font=tag_fnt))
b2_x = RX + b1_w + 20
draw.rounded_rectangle([b2_x, tag_y, b2_x+b2_w, tag_y+b1_h], radius=6, fill=rgb("#060F0A"))
draw.rounded_rectangle([b2_x, tag_y, b2_x+b2_w, tag_y+b1_h], radius=6, outline=ELECTRIC_TEAL, width=2)
draw.text((b2_x+4, tag_y+10), b2_text, font=tag_fnt, fill=GREEN_MID)

tl_fnt = fnt(MONO, 21)
draw.text((RX, tag_y + b1_h + 22), "бесплатный курс  ·  для начинающих", font=tl_fnt, fill=GREEN_DIM)

draw.rectangle([0, H-40, W, H], fill=rgb("#010409"))
draw.rectangle([0, H-40, W, H-37], fill=ELECTRIC_TEAL)

ch_fnt = fnt(MONO_BOLD, 20)
ch_w = int(draw.textlength("@hellsfrik", font=ch_fnt))
draw.text((W//2 - ch_w//2, H-30), "@hellsfrik", font=ch_fnt, fill=ELECTRIC_TEAL)

T, L = 3, 40
for (x1,y1,x2,y2) in [
    (0,0,L,T),(0,0,T,L),
    (W-L,0,W,T),(W-T,0,W,L),
    (0,H-T,L,H),(0,H-L,T,H),
    (W-L,H-T,W,H),(W-T,H-L,W,H)
]:
    draw.rectangle([x1,y1,x2,y2], fill=ELECTRIC_TEAL)

out_dir = "logo"
os.makedirs(out_dir, exist_ok=True)
out = os.path.join(out_dir, "lesson_4.png")

img.save(out, "PNG")
print("Готово! Файл сохранён:", os.path.abspath(out))