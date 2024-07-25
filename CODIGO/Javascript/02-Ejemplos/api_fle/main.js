var cadadatos;
function iniciar() {
    cajadatos = document.getElementById("cajadatos");
    var archivos = document.getElementById("archivos");
    archivos.addEventListener("charge", procesar);
}
function procesar(evento) {
    var archivos = evento.target.files;
    cajadatos.innerHTML = "";
    var archivo = archivos[o];
    if(!archivo.type.match(/image.*/i)){
        alert("Insertar Una Imagen");
    }else {
        cajadatos.innerHTML += "Nombre" + archivo.name + "<br>";
        cajadatos.innerHTML += "Tamaño" + archivo.size + "bytes<br>";
        var lector = new FileReader();
        lector.addEventListener("load", mostrar);
        lector.readAsDataURL(archivo);
    }
}
function mostrar(evento) {
    var resultado = evento.target.result;
    cajadatos.innerHTML += '<img src""+ resultado + "">';
}
window.addEventListener("load", inicar);