const apiURL = "http://0afb-190-14-232-218.ngrok.io";
const id = 152356434;
const object = "carro";

const controlBtn = document.querySelectorAll(".button");
const info = document.querySelector("#inf");

async function setControls(instruction) {
    return fetch(`${apiURL}/${object}/${id}`, {
            method: "PUT",
            headers: {
                "content-Type": "application/json"
            },
            body: JSON.stringify({ instruction })
        })
        .then((response) => response)
        .catch((err) => console.log(err));
}

function initAction(event) {
    setControls(event['target']['id']);
    info.innerHTML = event['target']['id'].toUpperCase();
};

function stopAction() {
    setControls('detener');
    info.innerHTML = 'detener'.toUpperCase();
};

controlBtn.forEach(element => {
    element.addEventListener('mousedown', (event) => { initAction(event) });
    element.addEventListener('mouseup', () => { stopAction() });
    element.addEventListener('touchstart', (event) => { initAction(event) });
});

/*POPUP*/
const popup = document.querySelector(".background");
document.querySelector("#close").addEventListener('click', () => { popup.style.visibility = "hidden" });
document.querySelector("#show").addEventListener('click', () => { popup.style.visibility = "visible" });
