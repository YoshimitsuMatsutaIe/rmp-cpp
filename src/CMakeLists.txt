file(GLOB SRC_RMP_TEST *.cpp)
add_library(
    rmp_test
    SHARED
    ${SRC_RMP_TEST}
)

message(${SRC_RMP_TEST})

# greetingライブラリのインクルードディレクトリを教える
# PROJECT_SOURCE_DIRはこのプロジェクトのルートディレクトリの絶対パス
target_include_directories(
    rmp_test
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)