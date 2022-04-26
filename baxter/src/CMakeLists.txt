file(GLOB BAXTER_SOURCE *.cpp)
add_library(
    baxter
    SHARED
    ${BAXTER_SOURCE}

)
# greetingライブラリのインクルードディレクトリを教えてあげる
# PROJECT_SOURCE_DIRはこのプロジェクトのルートディレクトリの絶対パス
target_include_directories(
    baxter
    PUBLIC ${PROJECT_SOURCE_DIR}/baxter/include
)