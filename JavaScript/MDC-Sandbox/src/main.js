import 'normalize.css';
import './styles/index.scss';
import { MDCRipple } from '@material/ripple';

document.addEventListener('DOMContentLoaded', function () {

    const buttons = document.querySelectorAll('.mdc-button');
    globalThis.MDC = {};

    MDC.buttons = [...buttons].map(btn => {
        return new MDCRipple(btn);
    });

});
