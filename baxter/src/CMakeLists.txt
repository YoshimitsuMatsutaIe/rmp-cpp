file(GLOB BAXTER_NONE_CLASS *.cpp)
add_library(
    baxter
    SHARED
    ${BAXTER_NONE_CLASS}
)

message(${BAXTER_NONE_CLASS})

# greetingライブラリのインクルードディレクトリを教える
# PROJECT_SOURCE_DIRはこのプロジェクトのルートディレクトリの絶対パス
target_include_directories(
    baxter
    PUBLIC ${PROJECT_SOURCE_DIR}/baxter/include
)