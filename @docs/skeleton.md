# How a component should be placed on the screen
THEME
├── GLOBAL
│   ├── FONTS
│   ├── SOUNDS
│   └── TEXTURES
└── PANEL
    ├── COMPONENT
    │   ├── WIDGET
    │   ├── SOUNDS (optional, overrides global sounds)
    │   ├── TEXTURES (optional, overrides global textures)
    │   └── EVENTS (logic for interactions)
    ├── COMPONENT
    │   ├── WIDGET
    │   ├── SOUNDS
    │   ├── TEXTURES
    │   └── EVENTS
    └── COMPONENT
        ├── WIDGET
        ├── SOUNDS
        ├── TEXTURES
        └── EVENTS


# How a Width need to be structured
WIDGET
├── POSITION
│   ├── X
│   ├── Y
│   ├── Z
└── COLOR
│   └── RGBA
│   │   ├── RED
│   │   ├── GREEN
│   │   ├── BLUE
│   │   └── OPACITY
└── SIZES
│   ├── WIDTH
│   └── HEIGHT
└── CONTENT
    └── MEDIA

# ENUM MEDIA
MEDIA = (IMAGE, TEXT, VIDEO)

# MEDIA TYPES
IMAGE
├── SOURCE (e.g., filepath or URL)
└── SCALE (e.g., 1.0 for native, 0.5 for half-size)

TEXT
├── STRING (e.g., "System Online")
├── FONT (e.g., "global/fonts/mono.ttf")
└── ALIGNMENT (e.g., left, center, right)

VIDEO
├── SOURCE (e.g., filepath or URL)
├── LOOP (e.g., true/false)
└── MUTE (e.g., true/false)

