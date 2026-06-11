const fotoPerfil = document.getElementById('fotoPerfil');
const nomePerfil = document.getElementById('nomePerfil');
const cursoPerfil = document.getElementById('cursoPerfil');
const biografiaPerfil = document.getElementById('biografiaPerfil');

const temaSelect = document.getElementById('temaSelect');
const fonteRange = document.getElementById('fonteRange');
const valorFonte = document.getElementById('valorFonte');
const mostrarBio = document.getElementById('mostrarBio');

const emailInput = document.getElementById('emailInput');
const telefoneInput = document.getElementById('telefoneInput');
const btnAtualizarContato = document.getElementById('btnAtualizarContato');
const emailExibido = document.getElementById('emailExibido');
const telefoneExibido = document.getElementById('telefoneExibido');

const contadorAcoes = document.getElementById('contadorAcoes');
const ultimaAcao = document.getElementById('ultimaAcao');

const btnAlterarNome = document.getElementById('btnAlterarNome');
const btnAlterarCurso = document.getElementById('btnAlterarCurso');
const btnAlterarFoto = document.getElementById('btnAlterarFoto');
const btnDestacarPerfil = document.getElementById('btnDestacarPerfil');
const btnRestaurar = document.getElementById('btnRestaurar');
const perfilSection = document.getElementById('perfil');

let totalAcoes = 0;

function registrarAcao(nomeDaAcao) {
    totalAcoes += 1;
    contadorAcoes.textContent = totalAcoes;
    ultimaAcao.textContent = nomeDaAcao;
}

btnAlterarNome.addEventListener('click', function() {
    nomePerfil.textContent = 'Maria Oliveira';
    registrarAcao('Alteração de nome');
});

btnAlterarCurso.addEventListener('click', function() {
    cursoPerfil.textContent = 'Curso: Análise e Desenvolvimento de Sistemas';
    registrarAcao('Alteração de curso');
});

btnAlterarFoto.addEventListener('click', function() {
    fotoPerfil.src = './images/cj2.png';
    registrarAcao('Alteração de foto');
});

btnDestacarPerfil.addEventListener('click', function() {
    perfilSection.classList.add('destacado');
    registrarAcao('Destaque de perfil');
});

btnRestaurar.addEventListener('click', function() {
    nomePerfil.textContent = 'João Silva';
    cursoPerfil.textContent = 'Curso: Técnico em Informática';
    fotoPerfil.src = 'imagens/perfil1.jpg';
    perfilSection.classList.remove('destacado');
    registrarAcao('Restauração de perfil');
});

temaSelect.addEventListener('change', function() {
    document.body.classList.remove('escuro', 'azul');
    
    if (temaSelect.value === 'escuro') {
        document.body.classList.add('escuro');
    } else if (temaSelect.value === 'azul') {
        document.body.classList.add('azul');
    }
    
    registrarAcao('Alteração de tema');
});

fonteRange.addEventListener('input', function() {
    const tamanho = fonteRange.value;
    biografiaPerfil.style.fontSize = tamanho + 'px';
    valorFonte.textContent = tamanho + 'px';
    registrarAcao('Alteração do tamanho da fonte');
});

mostrarBio.addEventListener('change', function() {
    if (mostrarBio.checked) {
        biografiaPerfil.style.display = 'block';
    } else {
        biografiaPerfil.style.display = 'none';
    }
    registrarAcao('Alternância da biografia');
});

btnAtualizarContato.addEventListener('click', function() {
    const email = emailInput.value ? emailInput.value : 'não informado';
    const telefone = telefoneInput.value ? telefoneInput.value : 'não informado';
    
    emailExibido.textContent = 'E-mail: ' + email;
    telefoneExibido.textContent = 'Telefone: ' + telefone;
    
    registrarAcao('Atualização de contato');
});