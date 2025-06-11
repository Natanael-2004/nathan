import random

perguntas = [
    {
        "pergunta": "Qual é o maior planeta do sistema solar?",
        "opcoes": ["A) Terra", "B) Júpiter", "C) Marte", "D) Saturno"],
        "resposta": "B"
    },
    {
        "pergunta": "Qual o resultado de 7 x 8?",
        "opcoes": ["A) 54", "B) 56", "C) 64", "D) 48"],
        "resposta": "B"
    },
    {
        "pergunta": "Em que continente fica o Brasil?",
        "opcoes": ["A) América", "B) África", "C) Europa", "D) Oceania"],
        "resposta": "A"
    },
    {
        "pergunta": "Quem escreveu 'Dom Casmurro'?",
        "opcoes": ["A) Machado de Assis", "B) Monteiro Lobato", "C) José de Alencar", "D) Clarice Lispector"],
        "resposta": "A"
    },
    {
        "pergunta": "Qual é a fórmula da água?",
        "opcoes": ["A) H2O", "B) CO2", "C) O2", "D) NaCl"],
        "resposta": "A"
    }
]

def jogar():
    pontuacao = 0
    random.shuffle(perguntas)
    for p in perguntas:
        print("\n" + p["pergunta"])
        for opcao in p["opcoes"]:
            print(opcao)
        resposta = input("Sua resposta (A, B, C ou D): ").strip().upper()
        if resposta == p["resposta"]:
            print("Correto!")
            pontuacao += 1
        else:
            print(f"Errado. A resposta correta é {p['resposta']}")
    print(f"\nSua pontuação final foi: {pontuacao} de {len(perguntas)}")

if __name__ == "__main__":
    print("Bem-vindo ao Jogo Educativo de Perguntas e Respostas!")
    jogar()
