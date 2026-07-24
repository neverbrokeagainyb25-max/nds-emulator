# Nintendo DS Emulator

An open-source Nintendo DS emulator written in modern C++.

This project aims to recreate the hardware and functionality of the Nintendo DS through software while providing an educational environment for learning about emulation, CPU architecture, memory systems, graphics, and low-level programming.

> 🚧 **Status: Early Development**
>
> This project is currently in its foundation stage and does not yet run Nintendo DS games.

---

## 🎮 About

The Nintendo DS is a unique piece of gaming hardware featuring:

* Two ARM processors
* Dual screens
* A touchscreen
* Dedicated 2D graphics hardware
* 3D graphics hardware
* Custom audio hardware
* A complex memory architecture

The goal of this project is to emulate these systems as accurately as practical and to develop the emulator incrementally from the ground up.

The project will begin with the CPU and memory systems before expanding into graphics, input, audio, cartridge support, and homebrew compatibility.

---

## 🚀 Current Status

### Project Foundation

* [x] Initial project structure
* [x] CMake project
* [x] C++20 configuration
* [x] Emulator core
* [x] ARM9 CPU foundation
* [x] ARM7 CPU foundation
* [x] Memory subsystem foundation
* [x] Cartridge subsystem foundation
* [x] Video subsystem foundation

### Currently Working On

* [ ] ARM9 instruction decoder
* [ ] ARM7 instruction decoder
* [ ] ARM instruction execution
* [ ] Thumb instruction execution
* [ ] CPU testing
* [ ] Nintendo DS memory map

---

## 🗺️ Roadmap

### Phase 1 — Foundation

* [x] Create project architecture
* [x] Set up CMake
* [x] Create CPU subsystems
* [x] Create memory subsystem
* [x] Create cartridge subsystem
* [x] Create video subsystem

### Phase 2 — CPU Emulation

* [ ] ARM9 CPU implementation
* [ ] ARM7 CPU implementation
* [ ] ARM instruction set
* [ ] Thumb instruction set
* [ ] CPU exceptions
* [ ] Interrupt handling
* [ ] CPU unit tests

### Phase 3 — Memory

* [ ] Nintendo DS memory map
* [ ] Main RAM
* [ ] Shared memory
* [ ] VRAM
* [ ] Memory-mapped I/O
* [ ] Hardware registers

### Phase 4 — Cartridge

* [ ] Nintendo DS ROM header parsing
* [ ] ROM loading
* [ ] Cartridge memory mapping
* [ ] Cartridge commands

### Phase 5 — Homebrew

* [ ] Basic boot process
* [ ] Homebrew ROM support
* [ ] First successful homebrew program
* [ ] Debugging tools

### Phase 6 — Graphics

* [ ] Dual-screen output
* [ ] 2D graphics
* [ ] Background layers
* [ ] Sprites
* [ ] VRAM rendering
* [ ] 3D graphics

### Phase 7 — Input and Audio

* [ ] D-pad
* [ ] Buttons
* [ ] Touchscreen
* [ ] Microphone
* [ ] Audio hardware

### Long-Term Goals

* [ ] Broad homebrew compatibility
* [ ] Improved debugging tools
* [ ] Performance optimization
* [ ] Community contributions
* [ ] Stable releases

---

## 🏗️ Project Structure

```text
nds-emulator/
├── CMakeLists.txt
├── README.md
├── LICENSE
├── CONTRIBUTING.md
├── .gitignore
│
├── .github/
│   └── ISSUE_TEMPLATE/
│       ├── bug_report.md
│       └── feature_request.md
│
├── docs/
│   ├── ARCHITECTURE.md
│   ├── DEVELOPMENT.md
│   └── ROADMAP.md
│
└── src/
    ├── main.cpp
    ├── emulator.cpp
    ├── emulator.hpp
    │
    ├── cpu/
    │   ├── arm9.cpp
    │   ├── arm9.hpp
    │   ├── arm7.cpp
    │   └── arm7.hpp
    │
    ├── memory/
    │   ├── memory.cpp
    │   └── memory.hpp
    │
    ├── cartridge/
    │   ├── cartridge.cpp
    │   └── cartridge.hpp
    │
    └── video/
        ├── video.cpp
        └── video.hpp
```

---

## 🔨 Building

### Requirements

* C++20-compatible compiler
* CMake 3.20 or newer
* Git

### Linux / ChromeOS Linux

Clone the repository:

```bash
git clone https://github.com/YOUR_USERNAME/nds-emulator.git
cd nds-emulator
```

Configure the project:

```bash
cmake -S . -B build
```

Build:

```bash
cmake --build build
```

Run:

```bash
./build/nds-emulator
```

---

## 🤝 Contributing

Contributions are welcome!

This project is intended to be a collaborative open-source emulator project. If you're interested in C++, ARM architecture, emulation, graphics, reverse engineering, testing, or documentation, we'd love to have you involved.

Some areas where contributions could help include:

* ARM9 emulation
* ARM7 emulation
* CPU instruction decoding
* Memory mapping
* Cartridge support
* Graphics
* Audio
* Input
* Debugging tools
* Testing
* Documentation

For larger architectural changes, please open an issue before starting work so the design can be discussed.

See `CONTRIBUTING.md` for more information.

---

## 🧪 Testing

Testing will be an important part of development.

The project will eventually include tests for:

* CPU instructions
* CPU registers
* Memory reads and writes
* Memory mapping
* Cartridge behavior
* Graphics functionality

---

## ⚖️ Legal

This project is intended for educational, research, and preservation purposes.

This repository does **not** contain Nintendo's proprietary ROMs, BIOS files, or other copyrighted Nintendo software.

Please only use software that you have the legal right to use, such as your own homebrew programs or legally obtained software.

---

## 📜 License

This project is licensed under the MIT License.

See `LICENSE` for details.

---

## 🌟 Project Vision

The long-term goal is to build a high-quality, open-source Nintendo DS emulator while creating a place where developers can learn about emulation and contribute to a challenging C++ project.

Starting from a blank project and working toward a functional emulator is a huge challenge — but that's what makes it interesting.

**Let's build it.** 🚀
