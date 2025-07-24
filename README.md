# 📷 Advanced QR Code Scanner

یک پروژه‌ی C++ برای اسکن QR Code و بارکد از طریق وب‌کم، با استفاده از OpenCV و ZXing.

---

## ✨ ویژگی‌ها
✅ دریافت فریم از دوربین  
✅ اسکن QR و استخراج داده  
✅ نمایش فریم و نتایج در UI  
✅ ذخیره تصویر و اطلاعات در JSON

---

## 📂 ساختار پروژه
```
/AdvancedScanner
├── CMakeLists.txt
├── src/main.cpp
└── libs/
    ├── FrameHandler/
    ├── Scanner/
    ├── UI/
    └── Archive/
```

---

## 👨‍💻 اعضای تیم
- امیرحسین حیدری (سر تیم – Archive و مدیریت پروژه)
- محمد طاها بیگدلی
- امیرعلی قاضی‌امین
- محمدمهدی سلمانی

---

## ⚙️ نحوه اجرا
1. نصب کتابخانه‌ها از طریق vcpkg:
```
vcpkg install opencv
vcpkg install nlohmann-json
vcpkg install zxing-cpp
```

2. ساخت پروژه با CMake:
```
mkdir build
cd build
cmake ..
make
```

3. اجرای برنامه:
```
./AdvancedScanner
```

---

## 📦 خروجی
- تصاویر اسکن شده در پوشه `output/`
- اطلاعات در فایل `output/log.json`

---

## 🔗 لینک‌ها
- [OpenCV](https://opencv.org/)
- [ZXing](https://github.com/zxing/zxing)
