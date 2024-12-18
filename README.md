﻿# Códigos de Possibilidades Basicas com OpenCV
# O que foi feito no Workshop do TDC?
Este repositório contém o código-fonte de um projeto desenvolvido durante um workshop de detecção de objetos com OpenCV em C++. O código demonstra como utilizar a biblioteca OpenCV para detectar faces humanas em tempo real em vídeos capturados por webcam. Foram utilizados os classificadores Haar Cascades pré-treinados para a detecção de faces. O código pode ser executado em sistemas operacionais Windows, Linux e macOS. Para executar o código, é necessário ter a biblioteca OpenCV instaladas. O código-fonte está disponível sob a licença MIT, permitindo sua utilização e modificação em projetos pessoais e comerciais. Contribuições para o projeto são bem-vindas!




# OpenCV
OpenCV, abreviação de Open Source Computer Vision Library, é uma biblioteca de programação de código aberto amplamente utilizada para aplicações de visão computacional. Ela oferece um conjunto abrangente de funções para processamento de imagens, análise de vídeo e aprendizado de máquina. Com o OpenCV, desenvolvedores podem criar soluções inovadoras para uma variedade de problemas, desde a detecção de faces em imagens até a criação de sistemas de vigilância em tempo real.

# Detecção de Rostos com OpenCV
A detecção de rostos é uma aplicação comum de visão computacional, onde a OpenCV (Open Source Computer Vision Library) é amplamente utilizada. Utilizando classificadores em cascata, como o Haar Cascade, é possível detectar rostos em imagens e vídeos. O processo envolve a criação de um objeto cv::CascadeClassifier que carrega um arquivo XML com dados treinados para detecção de rostos. O método detectMultiScale é utilizado para detectar várias escalas de rostos na imagem.

# Perspectiva
A transformação de perspectiva permite a correção ou alteração da perspectiva de uma imagem. Utilizando funções como cv::getPerspectiveTransform e cv::warpPerspective, a OpenCV consegue transformar a posição dos pontos de uma imagem para um novo sistema de coordenadas, o que é útil para aplicações como correção de imagens de documentos ou em projetos de realidade aumentada.

# Abertura de Imagem e Vídeo
Abrir e processar imagens e vídeos é uma das funcionalidades básicas do OpenCV. Imagens podem ser carregadas usando cv::imread, enquanto vídeos são capturados com cv::VideoCapture. Após abrir uma imagem ou vídeo, é possível realizar uma série de operações, desde conversão de formatos até a aplicação de filtros e detecção de objetos.

# Detecção de Texto
A detecção de texto em imagens é alcançada através de técnicas como OCR (Optical Character Recognition). Combinando OpenCV para pré-processamento de imagem e bibliotecas como Tesseract para OCR, é possível extrair texto de imagens de forma eficaz. O OpenCV facilita a preparação da imagem para OCR, aplicando binarização, remoção de ruídos, e outras técnicas de melhoria da qualidade da imagem.

# Orientação a Objeto
A orientação a objetos é um paradigma de programação essencial na construção de software modular e reutilizável. Em C++, ela é utilizada para organizar código através de classes e objetos, permitindo encapsulamento, herança e polimorfismo. No contexto de visão computacional, é comum utilizar orientação a objetos para definir classes que representam detectores, filtros, e processadores de imagem, facilitando a manutenção e a expansão do código.
