cmake_minimum_required(VERSION 3.0)
project(Questao4)

# Definindo o diretório de saída para o executável (na raiz do projeto)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Definindo a variável SOURCES com a lista de arquivos .cpp
file(GLOB_RECURSE SOURCES "src/sources/*.cpp")

# Adicionando os diretórios de cabeçalho
include_directories("src/headers")

# Criando o executável
add_executable(${PROJECT_NAME} ${SOURCES} src/main.cpp)