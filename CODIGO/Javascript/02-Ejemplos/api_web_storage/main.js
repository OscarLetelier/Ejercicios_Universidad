function iniciar() {
    let boton = document.getElementById("grabar");
    boton.addEventListener("click", nuevoitem);
}

function nuevoitem() {
    let clave = document.getElementById("clave").value;
    let valor = document.getElementById("texto").value;
    sessionStorage.setItem(clave, valor);
    mostrar(clave);
}
function mostrar(clave) {
    let cajadatos = document.getElementById("cajadatos");
    let valor = sessionStorage.getItem(clave);
    cajadatos.innerHTML = "<div>" + clave + "-" + valor + "</div>";
}

window.addEventListener("load", iniciar);